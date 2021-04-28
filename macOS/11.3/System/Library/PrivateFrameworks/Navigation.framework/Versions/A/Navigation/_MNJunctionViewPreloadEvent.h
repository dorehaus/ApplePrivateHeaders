/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:05 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/Navigation.framework/Versions/A/Navigation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class GEOComposedGuidanceEvent;

@interface _MNJunctionViewPreloadEvent : NSObject {

	char _needsPreload;
	GEOComposedGuidanceEvent* _junctionViewEvent;

}

@property (nonatomic,retain) GEOComposedGuidanceEvent * junctionViewEvent;              //@synthesize junctionViewEvent=_junctionViewEvent - In the implementation block
@property (assign,nonatomic) char needsPreload;                                         //@synthesize needsPreload=_needsPreload - In the implementation block
-(GEOComposedGuidanceEvent *)junctionViewEvent;
-(void)setJunctionViewEvent:(GEOComposedGuidanceEvent *)arg1 ;
-(char)needsPreload;
-(void)setNeedsPreload:(char)arg1 ;
@end
