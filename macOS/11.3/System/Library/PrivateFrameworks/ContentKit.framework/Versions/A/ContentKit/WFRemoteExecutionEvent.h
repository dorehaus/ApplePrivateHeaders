/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:31 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/ContentKit.framework/Versions/A/ContentKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ContentKit/WFEvent.h>

@class NSString;

@interface WFRemoteExecutionEvent : WFEvent {

	char _completed;
	NSString* _key;
	NSString* _source;
	NSString* _actionIdentifier;
	NSString* _destinationType;
	NSString* _connectionType;

}

@property (nonatomic,copy) NSString * key;                           //@synthesize key=_key - In the implementation block
@property (nonatomic,copy) NSString * source;                        //@synthesize source=_source - In the implementation block
@property (nonatomic,copy) NSString * actionIdentifier;              //@synthesize actionIdentifier=_actionIdentifier - In the implementation block
@property (nonatomic,copy) NSString * destinationType;               //@synthesize destinationType=_destinationType - In the implementation block
@property (nonatomic,copy) NSString * connectionType;                //@synthesize connectionType=_connectionType - In the implementation block
@property (assign,nonatomic) char completed;                         //@synthesize completed=_completed - In the implementation block
+(Class)codableEventClass;
-(NSString *)source;
-(NSString *)connectionType;
-(NSString *)key;
-(void)setKey:(NSString *)arg1 ;
-(void)setSource:(NSString *)arg1 ;
-(char)completed;
-(NSString *)actionIdentifier;
-(void)setCompleted:(char)arg1 ;
-(void)setConnectionType:(NSString *)arg1 ;
-(NSString *)destinationType;
-(void)setDestinationType:(NSString *)arg1 ;
-(void)setActionIdentifier:(NSString *)arg1 ;
@end

