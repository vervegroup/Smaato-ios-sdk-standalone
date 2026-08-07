// swift-tools-version:5.9

import PackageDescription

let package = Package(
    name: "SmaatoSDKStandalone",
    platforms: [.iOS(.v12)],
    products: [
        .library(name: "SmaatoSDK", targets: ["SmaatoSDKDependencies"])
    ],
    targets: [
        .binaryTarget(name: "NGSDK", path: "NGSDK.xcframework"),

        .binaryTarget(name: "SmaatoSDKCoreBinary", path: "SmaatoSDKCore.xcframework"),
        .binaryTarget(name: "SmaatoSDKBannerBinary", path: "SmaatoSDKBanner.xcframework"),
        .binaryTarget(name: "SmaatoSDKInterstitialBinary", path: "SmaatoSDKInterstitial.xcframework"),
        .binaryTarget(name: "SmaatoSDKRewardedAdsBinary", path: "SmaatoSDKRewardedAds.xcframework"),
        .binaryTarget(name: "SmaatoSDKNativeBinary", path: "SmaatoSDKNative.xcframework"),
        .binaryTarget(name: "SmaatoSDKUnifiedBiddingBinary", path: "SmaatoSDKUnifiedBidding.xcframework"),
        .binaryTarget(name: "SmaatoSDKInAppBiddingBinary", path: "SmaatoSDKInAppBidding.xcframework"),
        .binaryTarget(name: "OMSDK_Smaato", path: "OMSDK-Smaato-1.6.3/OMSDK_Smaato.xcframework"),

        .target(
            name: "SmaatoSDKDependencies",
            dependencies: [
                "SmaatoSDKCoreBinary",
                "SmaatoSDKBannerBinary",
                "SmaatoSDKInterstitialBinary",
                "SmaatoSDKRewardedAdsBinary",
                "SmaatoSDKNativeBinary",
                "SmaatoSDKUnifiedBiddingBinary",
                "SmaatoSDKInAppBiddingBinary",
                "NGSDK",
                "OMSDK_Smaato",
            ],
            path: "Sources"
        )
    ]
)
