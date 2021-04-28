/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:36 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/CoreSuggestions.framework/Versions/A/CoreSuggestions
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreSuggestions/CoreSuggestions-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, SGIPPerson, NSArray, NSDate;

@interface SGIPMessage : NSObject <NSSecureCoding, NSCopying> {

	char _isSent;
	char _isGroupConversation;
	char _isSenderSignificant;
	NSString* _messageId;
	SGIPPerson* _sender;
	NSArray* _recipients;
	NSString* _subject;
	NSDate* _dateSent;
	NSArray* _messageUnits;

}

@property (nonatomic,retain) NSString * messageId;                  //@synthesize messageId=_messageId - In the implementation block
@property (nonatomic,retain) SGIPPerson * sender;                   //@synthesize sender=_sender - In the implementation block
@property (nonatomic,retain) NSArray * recipients;                  //@synthesize recipients=_recipients - In the implementation block
@property (nonatomic,retain) NSString * subject;                    //@synthesize subject=_subject - In the implementation block
@property (nonatomic,retain) NSDate * dateSent;                     //@synthesize dateSent=_dateSent - In the implementation block
@property (assign,nonatomic) char isSent;                           //@synthesize isSent=_isSent - In the implementation block
@property (assign,nonatomic) char isGroupConversation;              //@synthesize isGroupConversation=_isGroupConversation - In the implementation block
@property (assign,nonatomic) char isSenderSignificant;              //@synthesize isSenderSignificant=_isSenderSignificant - In the implementation block
@property (nonatomic,retain) NSArray * messageUnits;                //@synthesize messageUnits=_messageUnits - In the implementation block
+(char)supportsSecureCoding;
+(id)messageWithIPMessage:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(char)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(SGIPPerson *)sender;
-(void)setRecipients:(NSArray *)arg1 ;
-(NSArray *)recipients;
-(void)setSubject:(NSString *)arg1 ;
-(NSString *)subject;
-(void)setSender:(SGIPPerson *)arg1 ;
-(NSString *)messageId;
-(void)setMessageId:(NSString *)arg1 ;
-(NSDate *)dateSent;
-(void)setDateSent:(NSDate *)arg1 ;
-(char)isSent;
-(char)isGroupConversation;
-(char)isSenderSignificant;
-(NSArray *)messageUnits;
-(void)setMessageUnits:(NSArray *)arg1 ;
-(void)setIsSent:(char)arg1 ;
-(void)setIsGroupConversation:(char)arg1 ;
-(void)setIsSenderSignificant:(char)arg1 ;
-(id)toIPMessage;
-(char)isEqualToMessage:(id)arg1 ;
@end

