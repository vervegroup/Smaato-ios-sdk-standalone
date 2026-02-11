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
        .package(url: "https://github.com/googleads/swift-package-manager-google-mobile-ads.git", from: "11.0.0")
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
        .binaryTarget(name: "OMSDK_Pubnativenet", path: "OMSDK-1.5.4/OMSDK_Pubnativenet.xcframework"),
        .binaryTarget(name: "OMSDK_Smaato", path: "OMSDK-Smaato-1.5.2/OMSDK_Smaato.xcframework"),
        
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
                "OMSDK_Pubnativenet",
                "OMSDK_Smaato"
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
