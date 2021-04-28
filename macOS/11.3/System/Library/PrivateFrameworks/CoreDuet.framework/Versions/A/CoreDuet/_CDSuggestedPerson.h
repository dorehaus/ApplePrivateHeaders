/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:01 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/CoreDuet.framework/Versions/A/CoreDuet
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class _CDContact, NSString, NSArray;

@interface _CDSuggestedPerson : NSObject {

	_CDContact* _contact;
	NSString* _interactionBundleID;
	double _rank;
	double _score;
	NSArray* _interactions;

}

@property (retain) NSString * interactionBundleID;              //@synthesize interactionBundleID=_interactionBundleID - In the implementation block
@property (assign) double rank;                                 //@synthesize rank=_rank - In the implementation block
@property (assign) double score;                                //@synthesize score=_score - In the implementation block
@property (retain) NSArray * interactions;                      //@synthesize interactions=_interactions - In the implementation block
@property (retain) _CDContact * contact;                        //@synthesize contact=_contact - In the implementation block
-(id)description;
-(double)score;
-(NSArray *)interactions;
-(_CDContact *)contact;
-(void)setContact:(_CDContact *)arg1 ;
-(void)setScore:(double)arg1 ;
-(void)setRank:(double)arg1 ;
-(void)setInteractions:(NSArray *)arg1 ;
-(void)setInteractionBundleID:(NSString *)arg1 ;
-(double)rank;
-(NSString *)interactionBundleID;
@end

