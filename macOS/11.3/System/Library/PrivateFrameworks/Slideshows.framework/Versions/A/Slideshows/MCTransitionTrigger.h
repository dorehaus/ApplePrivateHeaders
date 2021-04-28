/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:40 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/Slideshows.framework/Versions/A/Slideshows
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Slideshows/MCAction.h>
#import <libobjc.A.dylib/MCTransitionTrigger.h>
@class NSString, NSDictionary;


@protocol MCTransitionTrigger
@property (copy) NSString * transitionID; 
@property (assign,nonatomic) double transitionDuration; 
@property (nonatomic,copy) NSDictionary * transitionAttributes; 
@required
-(double)transitionDuration;
-(void)setTransitionDuration:(double)arg1;
-(NSString *)transitionID;
-(void)setTransitionAttributes:(id)arg1;
-(void)setTransitionID:(id)arg1;
-(NSDictionary *)transitionAttributes;

@end


@class NSString, NSDictionary, NSMutableDictionary;

@interface MCTransitionTrigger : MCAction <MCTransitionTrigger> {

	NSMutableDictionary* _transitionAttributes;
	NSString* _transitionID;
	double _transitionDuration;
	NSString* _transitionDestinationPlugID;

}

@property (copy) NSString * transitionDestinationPlugID;                     //@synthesize transitionDestinationPlugID=_transitionDestinationPlugID - In the implementation block
@property (copy) NSString * transitionID;                                    //@synthesize transitionID=_transitionID - In the implementation block
@property (assign,nonatomic) double transitionDuration;                      //@synthesize transitionDuration=_transitionDuration - In the implementation block
@property (nonatomic,copy) NSDictionary * transitionAttributes;              //@synthesize transitionAttributes=_transitionAttributes - In the implementation block
+(id)transitionForTargetPlugObjectID:(id)arg1 withTransitionID:(id)arg2 ;
-(id)description;
-(id)xmlElement;
-(id)imprint;
-(double)transitionDuration;
-(void)setTransitionDuration:(double)arg1 ;
-(NSString *)transitionID;
-(void)setTransitionAttributes:(NSDictionary *)arg1 ;
-(void)setTransitionID:(NSString *)arg1 ;
-(void)setTransitionDestinationPlugID:(NSString *)arg1 ;
-(NSDictionary *)transitionAttributes;
-(void)demolish;
-(NSString *)transitionDestinationPlugID;
-(id)initWithImprint:(id)arg1 ;
-(void)_copySelfToSnapshot:(id)arg1 ;
@end

