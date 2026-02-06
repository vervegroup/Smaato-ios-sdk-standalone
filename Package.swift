// swift-tools-version:5.9

import PackageDescription

let package = Package(
    name: "SmaatoSDKStandalone",
    platforms: [.iOS(.v12)],
    products: [
        .library(name: "SmaatoSDK", targets: ["SmaatoSDKDependencies"])
    ],
    targets: [
        .binaryTarget(name: "ATOM", path: "ATOM.xcframework"),
        .binaryTarget(name: "NGSDK", path: "NGSDK.xcframework"),

        .binaryTarget(name: "SmaatoSDKCoreBinary", path: "SmaatoSDKCore.xcframework"),
        .binaryTarget(name: "SmaatoSDKBannerBinary", path: "SmaatoSDKBanner.xcframework"),
        .binaryTarget(name: "SmaatoSDKInterstitialBinary", path: "SmaatoSDKInterstitial.xcframework"),
        .binaryTarget(name: "SmaatoSDKRewardedAdsBinary", path: "SmaatoSDKRewardedAds.xcframework"),
        .binaryTarget(name: "SmaatoSDKNativeBinary", path: "SmaatoSDKNative.xcframework"),
        .binaryTarget(name: "SmaatoSDKUnifiedBiddingBinary", path: "SmaatoSDKUnifiedBidding.xcframework"),
        .binaryTarget(name: "SmaatoSDKInAppBiddingBinary", path: "SmaatoSDKInAppBidding.xcframework"),

        .binaryTarget(name: "SmaatoHyBidBinary", path: "Smaato_HyBid.xcframework"),
        .binaryTarget(name: "OMSDK", path: "OMSDK-1.5.4/OMSDK_Pubnativenet.xcframework"),

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
                "SmaatoHyBidBinary",
                "ATOM",
                "NGSDK",
                "OMSDK"
            ],
            path: "Sources"
        )
    ]
)
