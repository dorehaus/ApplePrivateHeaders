/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:17 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/Vision.framework/Versions/A/Vision
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Vision/VNTracker.h>

@class FaceCoreDetector, NSDictionary;

@interface VNObjectTrackerLegacyFaceCore : VNTracker {

	FaceCoreDetector* _detector;
	NSDictionary* _detectOptions;
	NSDictionary* _extractOptions;

}
+(id)_convertOptionsToFaceCoreExtractOptions:(id)arg1 ;
+(id)_convertOptionsToFaceCoreDetectOptions:(id)arg1 ;
+(id)_convertOptionsToFaceCoreSetupOptions:(id)arg1 ;
+(Class)trackerObservationClass;
-(char)reset:(id*)arg1 ;
-(id)initWithOptions:(id)arg1 error:(id*)arg2 ;
-(char)isResettable;
-(id)setTrackedObjects:(id)arg1 inFrame:(id)arg2 error:(id*)arg3 ;
-(id)trackInFrame:(id)arg1 error:(id*)arg2 ;
-(id)_detectFacesInImage:(id)arg1 error:(id*)arg2 ;
@end

