# Smaato-ios-sdk-standalone
## Installation
### Swift Package Manager

You can use Swift Package Manager to integrate the `Smaato iOS SDK` directly into your Xcode project.

**Step 1: Add the Package**

In Xcode, go to:

**File → Add Package Dependencies…**

Enter the repository URL:

`https://github.com/vervegroup/Smaato-ios-sdk-standalone`

Set the Dependency Rule to **Up to Next Major Version** and enter `23.0.1`

**Step 2: Select Products**

When prompted, select the product:
- `SmaatoSDK` — core SDK

Mediation adapters are separate packages:
- AdMob: `https://github.com/vervegroup/ios-sdk-mediation-admob` (product `SmaatoSDKAdaptersAdMob`)
- AppLovin: `https://github.com/vervegroup/smaato-ios-sdk-mediation-applovin` (product `SmaatoSDKAdaptersAppLovinWaterfall`)

Click **Add Package**.

**Step 3: Add `-ObjC` Linker Flag**

In your target's **Build Settings**, find **Other Linker Flags** and add:

`-ObjC`

### Requirements
- Xcode 15+
- iOS 12+
