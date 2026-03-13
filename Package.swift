// swift-tools-version:5.9

import PackageDescription

let package = Package(
    name: "SmaatoSDKStandalone",
    platforms: [.iOS(.v12)],
    products: [
        .library(name: "SmaatoSDK", targets: ["SmaatoSDKDependencies"]),
        .library(name: "SmaatoSDKAdaptersAdMob", targets: ["SmaatoSDKAdaptersAdMob"]),
        .library(name: "SmaatoSDKAdaptersAppLovinWaterfall", targets: ["SmaatoSDKAdaptersAppLovinWaterfall"])
    ],
    dependencies: [
        .package(url: "https://github.com/googleads/swift-package-manager-google-mobile-ads.git", from: "11.0.0"),
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
            ],
            path: "Sources"
        ),
        .target(
            name: "SmaatoSDKAdaptersAdMob",
            dependencies: [
                "SmaatoSDKCoreBinary",
                "SmaatoSDKBannerBinary",
                "SmaatoSDKInterstitialBinary",
                "SmaatoSDKNativeBinary",
                "SmaatoSDKRewardedAdsBinary",
                "OMSDK_Smaato",
                .product(name: "GoogleMobileAds", package: "swift-package-manager-google-mobile-ads")
            ],
            path: "SmaatoSDKAdapters/AdMob",
            sources: [
                "Banner/SMAAdMobSmaatoBannerAdapter.m",
                "Interstitial/SMAAdMobSmaatoInterstitialAdapter.m",
                "Native/SMAAdMobSmaatoNativeAdapter.m",
                "RewardedVideo/SMAAdMobSmaatoRewardedVideoAdapter.m"
            ],
            publicHeadersPath: ".",
            cSettings: [
                .headerSearchPath("Banner"),
                .headerSearchPath("Interstitial"),
                .headerSearchPath("Native"),
                .headerSearchPath("RewardedVideo")
            ],
            linkerSettings: [
                .unsafeFlags(["-ObjC"])
            ]
        ),
        .target(
            name: "SmaatoSDKAdaptersAppLovinWaterfall",
            dependencies: [
                "SmaatoSDKCoreBinary",
                "SmaatoSDKBannerBinary",
                "SmaatoSDKInterstitialBinary",
                "SmaatoSDKNativeBinary",
                "SmaatoSDKRewardedAdsBinary"
            ],
            path: "SmaatoSDKAdapters/ApplovinWaterfall",
            sources: [
                "SmaatoApplovinMediationAdapter.m"
            ],
            publicHeadersPath: ".",
            cSettings: [
                .headerSearchPath(".")
            ],
            linkerSettings: [
                .unsafeFlags(["-ObjC"])
            ]
        )
    ]
)
