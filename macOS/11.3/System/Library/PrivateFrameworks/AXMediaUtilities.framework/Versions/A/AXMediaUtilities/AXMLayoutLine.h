/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:41 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/AXMediaUtilities.framework/Versions/A/AXMediaUtilities
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AXMediaUtilities/AXMediaUtilities-Structs.h>
#import <AXMediaUtilities/AXMLayoutItem.h>

@class NSMutableArray;

@interface AXMLayoutLine : AXMLayoutItem {

	NSMutableArray* _sequences;

}
+(id)line:(id)arg1 ;
-(CGRect)frame;
-(id)sequences;
-(CGRect)normalizedFrame;
-(void)addSequence:(id)arg1 ;
@end

