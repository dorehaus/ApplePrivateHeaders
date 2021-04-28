/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:50:57 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/AppKit.framework/Versions/C/AppKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSScrubberLayout;


@protocol NSScrubberItemLayout <NSObject>
@property (retain) NSScrubberLayout * scrubberLayout; 
@property (readonly) char wantsTrackingPosition; 
@required
-(void)setScrubberLayout:(id)arg1;
-(NSScrubberLayout *)scrubberLayout;
-(void)invalidateForStateIfNeeded:(SCD_Struct_NS65)arg1;
-(id)itemLayoutAttributesForState:(SCD_Struct_NS65)arg1 inView:(id)arg2;
-(id)itemLayoutAttributesForItemAtIndex:(long long)arg1 withState:(SCD_Struct_NS65)arg2 inView:(id)arg3;
-(char)wantsTrackingPosition;

@end

