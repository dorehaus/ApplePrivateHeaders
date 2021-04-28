/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:40 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/Slideshows.framework/Versions/A/Slideshows
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSDictionary;


@protocol MCActionSupport
@property (readonly) NSDictionary * actions; 
@property (nonatomic,readonly) unsigned long long countOfActions; 
@required
-(void)removeAllActions;
-(id)actionForKey:(id)arg1;
-(NSDictionary *)actions;
-(void)removeActionForKey:(id)arg1;
-(void)setAction:(id)arg1 forKey:(id)arg2;
-(unsigned long long)countOfActions;
-(void)initActionsWithImprints:(id)arg1;
-(void)demolishActions;
-(id)imprintsForActions;
-(void)addActionsToXMLElement:(id)arg1;

@end

