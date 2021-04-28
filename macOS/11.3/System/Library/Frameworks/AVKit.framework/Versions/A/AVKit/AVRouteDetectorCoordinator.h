/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:51 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/AVKit.framework/Versions/A/AVKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface AVRouteDetectorCoordinator : NSObject {

	char _routeDetectionEnabled;

}

@property (assign,getter=isRouteDetectionEnabled,nonatomic) char routeDetectionEnabled;              //@synthesize routeDetectionEnabled=_routeDetectionEnabled - In the implementation block
@property (nonatomic,readonly) char multipleRoutesDetected; 
+(char)multipleRoutesDetected;
+(void)beginDetectingRoutes;
+(void)endDetectingRoutes;
+(id)routeDetectorCoordinatorQueue;
+(id)sharedSystemRouteDetector;
+(void)updateMultipleRoutesDetected;
+(void)setMultipleRoutesDetected:(char)arg1 ;
-(void)dealloc;
-(char)multipleRoutesDetected;
-(char)isRouteDetectionEnabled;
-(void)setRouteDetectionEnabled:(char)arg1 ;
@end
