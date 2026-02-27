// 
// NGSDK SDK License
//
//

#import <Foundation/Foundation.h>

#define MAX_ELEMENTS 100
#define MAX_ATTRIBUTES 100

#define NGSDKXML_ATTRIBUTE_NAME_START 0
#define NGSDKXML_ATTRIBUTE_NAME_END 1
#define NGSDKXML_ATTRIBUTE_VALUE_START 2
#define NGSDKXML_ATTRIBUTE_VALUE_END 3
#define NGSDKXML_ATTRIBUTE_CDATA_END 4

// ================================================================================================
//  Structures
// ================================================================================================
typedef struct _NGSDKXMLAttribute {
	char * name;
	char * value;
	struct _NGSDKXMLAttribute * next;
} NGSDKXMLAttribute;

typedef struct _NGSDKXMLElement {
	char * name;
	char * text;
	
	NGSDKXMLAttribute * firstAttribute;
	
	struct _NGSDKXMLElement * parentElement;
	
	struct _NGSDKXMLElement * firstChild;
	struct _NGSDKXMLElement * currentChild;
	
	struct _NGSDKXMLElement * nextSibling;
	struct _NGSDKXMLElement * previousSibling;
	
} NGSDKXMLElement;

typedef struct _NGSDKXMLElementBuffer {
	NGSDKXMLElement * elements;
	struct _NGSDKXMLElementBuffer * next;
	struct _NGSDKXMLElementBuffer * previous;
} NGSDKXMLElementBuffer;

typedef struct _NGSDKXMLAttributeBuffer {
	NGSDKXMLAttribute * attributes;
	struct _NGSDKXMLAttributeBuffer * next;
	struct _NGSDKXMLAttributeBuffer * previous;
} NGSDKXMLAttributeBuffer;

// ================================================================================================
//  NGSDKXML Public Interface
// ================================================================================================
@interface NGSDKXML : NSObject {
	
@private
	NGSDKXMLElement * rootXMLElement;
	
	NGSDKXMLElementBuffer * currentElementBuffer;
	NGSDKXMLAttributeBuffer * currentAttributeBuffer;
	
	long currentElement;
	long currentAttribute;
	
	char * bytes;
	long bytesLength;
	
	BOOL invalidXML;
	NSString *parsingErrorDescription;
}

@property (nonatomic, retain) NSString *parsingErrorDescription;
@property (nonatomic, readonly) BOOL invalidXML;
@property (nonatomic, readonly) NGSDKXMLElement * rootXMLElement;

+ (id)NGSDKXMLWithURL:(NSURL*)aURL;
+ (id)NGSDKXMLWithXMLString:(NSString*)aXMLString;
+ (id)NGSDKXMLWithXMLData:(NSData*)aData;
+ (id)NGSDKXMLWithXMLFile:(NSString*)aXMLFile;
+ (id)NGSDKXMLWithXMLFile:(NSString*)aXMLFile fileExtension:(NSString*)aFileExtension;

- (id)initWithURL:(NSURL*)aURL;
- (id)initWithXMLString:(NSString*)aXMLString;
- (id)initWithXMLData:(NSData*)aData;
- (id)initWithXMLFile:(NSString*)aXMLFile;
- (id)initWithXMLFile:(NSString*)aXMLFile fileExtension:(NSString*)aFileExtension;

@end

// ================================================================================================
//  NGSDKXML Static Functions Interface
// ================================================================================================

@interface NGSDKXML (StaticFunctions)

+ (NSString*) elementName:(NGSDKXMLElement*)aXMLElement;
+ (NSString*) textForElement:(NGSDKXMLElement*)aXMLElement;
+ (NSString*) valueOfAttributeNamed:(NSString *)aName forElement:(NGSDKXMLElement*)aXMLElement;

+ (NSString*) attributeName:(NGSDKXMLAttribute*)aXMLAttribute;
+ (NSString*) attributeValue:(NGSDKXMLAttribute*)aXMLAttribute;

+ (NGSDKXMLElement*) nextSiblingNamed:(NSString*)aName searchFromElement:(NGSDKXMLElement*)aXMLElement;
+ (NGSDKXMLElement*) childElementNamed:(NSString*)aName parentElement:(NGSDKXMLElement*)aParentXMLElement;

@end
