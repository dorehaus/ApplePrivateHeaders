/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:16 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/MapKit.framework/Versions/A/MapKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol MKSystemControllerOpenURLDelegate;
#import <MapKit/MapKit-Structs.h>
@interface MKSystemController : NSObject {

	id<MKSystemControllerOpenURLDelegate> _openURLDelegate;

}

@property (assign,nonatomic,__weak) id<MKSystemControllerOpenURLDelegate> openURLDelegate;              //@synthesize openURLDelegate=_openURLDelegate - In the implementation block
+(id)sharedInstance;
-(char)openURL:(id)arg1 ;
-(CGSize)screenSize;
-(void)openURL:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(char)isInternalInstall;
-(char)shouldUseDarkAppearanceForAppearance:(id)arg1 ;
-(double)screenScale;
-(int)userInterfaceIdiom;
-(char)supports3DMaps;
-(id)_transformURLIfNecessary:(id)arg1 ;
-(char)_openURLsOnBackgroundThread;
-(id)_defaultOpenURLOptions;
-(char)isHiDPI;
-(char)supportsPitchAPI;
-(char)supports3DImagery;
-(char)requiresRTT;
-(char)reduceMotionEnabled;
-(void)placeDialRequest:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)openUserActivity:(id)arg1 withApplicationProxy:(id)arg2 requireOptionKeyPromptUnlockDevice:(char)arg3 completionHandler:(/*^block*/id)arg4 ;
-(char)overrideBlurStyle;
-(char)shouldCaptureMapViewGestureAnalytics;
-(id<MKSystemControllerOpenURLDelegate>)openURLDelegate;
-(void)setOpenURLDelegate:(id<MKSystemControllerOpenURLDelegate>)arg1 ;
@end
