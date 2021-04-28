/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:39 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/Geode.framework/Versions/A/Geode
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSCursor;

@interface DGBrushCursorCacheItem : NSObject {

	NSCursor* _cursor;
	float _radius;
	float _softness;
	char _showSoftness;
	int _style;
	float _scale;

}
+(id)cacheItemWithCursor:(id)arg1 radius:(float)arg2 softness:(float)arg3 showSoftness:(char)arg4 style:(int)arg5 scale:(float)arg6 ;
-(void)dealloc;
-(int)style;
-(id)cursor;
-(float)scale;
-(float)radius;
-(float)softness;
-(char)showSoftness;
@end

