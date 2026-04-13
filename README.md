# Smaato-ios-sdk-standalone
## Installation
### Swift Package Manager

You can use Swift Package Manager to integrate the `Smaato iOS SDK` — including the optional `SmaatoSDKAdaptersAdMob` and `SmaatoSDKAdaptersAppLovinWaterfall` adapters directly into your Xcode project.

**Step 1: Add the Package**

In Xcode, go to:

**File → Add Package Dependencies…**

Enter the repository URL:

`https://github.com/vervegroup/Smaato-ios-sdk-standalone`

Set the Dependency Rule to **Up to Next Major Version** and enter `23.0.1`

**Step 2: Select Products**

When prompted, select the products you need:
- `SmaatoSDK` — core SDK (required)
- `SmaatoSDKAdaptersAdMob` — AdMob adapter (optional)
- `SmaatoSDKAdaptersAppLovinWaterfall` — AppLovin adapter (optional)

Click **Add Package**.

**Step 3: Add `-ObjC` Linker Flag**

In your target's **Build Settings**, find **Other Linker Flags** and add:

`-ObjC`

### Requirements
- Xcode 15+
- iOS 12+
