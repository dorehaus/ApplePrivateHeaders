/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:38 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/MonitorPanel.framework/Versions/A/MonitorPanel
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableArray;

@interface MPDisplayModeBucket : NSObject {

	float _minHeight;
	float _maxHeight;
	float _targetHeight;
	char _usePreciseRate;
	NSMutableArray* _modes;

}
-(void)dealloc;
-(char)modeFitsBucket:(id)arg1 ;
-(id)initWithMinHeight:(float)arg1 maxHeight:(float)arg2 targetHeight:(float)arg3 usingPreciseRate:(char)arg4 ;
-(char)addModeToBucket:(id)arg1 ;
-(id)highMode;
-(id)lowMode;
-(id)bestMode;
-(id)bestModeForNativeHeight:(float)arg1 ;
@end

