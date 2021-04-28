/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:48 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/GameCenterFoundation.framework/Versions/A/GameCenterFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class GKTurnBasedParticipant, GKTurnBasedMatch, GKTurnBasedExchangeInternal, NSArray, NSString, NSData, NSDate;

@interface GKTurnBasedExchange : NSObject {

	GKTurnBasedParticipant* _sender;
	GKTurnBasedMatch* _match;
	GKTurnBasedExchangeInternal* _internal;
	NSArray* _replies;
	NSArray* _recipients;

}

@property (retain) NSArray * recipients;                                //@synthesize recipients=_recipients - In the implementation block
@property (retain) NSArray * replies;                                   //@synthesize replies=_replies - In the implementation block
@property (retain) NSString * exchangeID; 
@property (retain) GKTurnBasedParticipant * sender;                     //@synthesize sender=_sender - In the implementation block
@property (retain) NSData * data; 
@property (retain) NSDate * timeoutDate; 
@property (retain) NSDate * completionDate; 
@property (retain) GKTurnBasedExchangeInternal * internal;              //@synthesize internal=_internal - In the implementation block
@property (__weak) GKTurnBasedMatch * match;                            //@synthesize match=_match - In the implementation block
@property (readonly) char status; 
@property (readonly) NSString * message; 
@property (readonly) NSDate * sendDate; 
+(char)instancesRespondToSelector:(SEL)arg1 ;
+(id)instanceMethodSignatureForSelector:(SEL)arg1 ;
-(char)isEqual:(id)arg1 ;
-(char)respondsToSelector:(SEL)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)init;
-(id)methodSignatureForSelector:(SEL)arg1 ;
-(id)forwardingTargetForSelector:(SEL)arg1 ;
-(id)valueForUndefinedKey:(id)arg1 ;
-(NSString *)message;
-(char)status;
-(void)setValue:(id)arg1 forUndefinedKey:(id)arg2 ;
-(GKTurnBasedParticipant *)sender;
-(void)setRecipients:(NSArray *)arg1 ;
-(NSArray *)recipients;
-(void)setSender:(GKTurnBasedParticipant *)arg1 ;
-(GKTurnBasedExchangeInternal *)internal;
-(void)setInternal:(GKTurnBasedExchangeInternal *)arg1 ;
-(GKTurnBasedMatch *)match;
-(void)setMatch:(GKTurnBasedMatch *)arg1 ;
-(NSArray *)replies;
-(id)initWithInternalRepresentation:(id)arg1 ;
-(void)setReplies:(NSArray *)arg1 ;
-(void)_updateInternalFromMatchInternal:(id)arg1 ;
-(void)cancelWithLocalizableMessageKey:(id)arg1 arguments:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)replyWithLocalizableMessageKey:(id)arg1 arguments:(id)arg2 data:(id)arg3 completionHandler:(/*^block*/id)arg4 ;
@end

