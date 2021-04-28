/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:40 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/Slideshows.framework/Versions/A/Slideshows
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Slideshows/MCAction.h>

@class NSMutableDictionary, NSDictionary;

@interface MCGenericAction : MCAction {

	NSMutableDictionary* _attributes;

}

@property (copy) NSDictionary * attributes;              //@synthesize attributes=_attributes - In the implementation block
+(id)genericActionForTargetPlugObjectID:(id)arg1 withAttributes:(id)arg2 ;
-(id)description;
-(NSDictionary *)attributes;
-(void)setAttributes:(NSDictionary *)arg1 ;
-(id)xmlElement;
-(id)imprint;
-(void)demolish;
-(id)initWithImprint:(id)arg1 ;
-(void)_copySelfToSnapshot:(id)arg1 ;
@end

