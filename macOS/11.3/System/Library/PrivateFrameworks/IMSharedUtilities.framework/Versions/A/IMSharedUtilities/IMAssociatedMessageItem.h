/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:39 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/IMSharedUtilities.framework/Versions/A/IMSharedUtilities
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <IMSharedUtilities/IMSharedUtilities-Structs.h>
#import <IMSharedUtilities/IMMessageItem.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <IMSharedUtilities/IMRemoteObjectCoding.h>

@class NSString, NSArray;

@interface IMAssociatedMessageItem : IMMessageItem <NSSecureCoding, NSCopying, IMRemoteObjectCoding> {

	NSString* _associatedMessageGUID;
	long long _associatedMessageType;
	NSArray* _consumedSessionPayloads;
	NSRange _associatedMessageRange;

}

@property (nonatomic,retain) NSString * associatedMessageGUID;               //@synthesize associatedMessageGUID=_associatedMessageGUID - In the implementation block
@property (assign,nonatomic) long long associatedMessageType;                //@synthesize associatedMessageType=_associatedMessageType - In the implementation block
@property (assign,nonatomic) NSRange associatedMessageRange;                 //@synthesize associatedMessageRange=_associatedMessageRange - In the implementation block
@property (nonatomic,retain) NSArray * consumedSessionPayloads;              //@synthesize consumedSessionPayloads=_consumedSessionPayloads - In the implementation block
+(char)supportsSecureCoding;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)dealloc;
-(char)isEqual:(id)arg1 ;
-(id)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)copyDictionaryRepresentation;
-(char)isFirstMessageCandidate;
-(char)isLastMessageCandidate;
-(id)initWithDictionary:(id)arg1 hint:(id)arg2 ;
-(id)copyForBackwardsCompatibility;
-(void)setConsumedSessionPayloads:(NSArray *)arg1 ;
-(NSArray *)consumedSessionPayloads;
-(long long)associatedMessageType;
-(NSString *)associatedMessageGUID;
-(NSRange)associatedMessageRange;
-(id)initWithSenderInfo:(id)arg1 time:(id)arg2 timeRead:(id)arg3 timeDelivered:(id)arg4 timePlayed:(id)arg5 subject:(id)arg6 body:(id)arg7 bodyData:(id)arg8 attributes:(id)arg9 fileTransferGUIDs:(id)arg10 flags:(unsigned long long)arg11 guid:(id)arg12 messageID:(long long)arg13 account:(id)arg14 accountID:(id)arg15 service:(id)arg16 handle:(id)arg17 roomName:(id)arg18 unformattedID:(id)arg19 countryCode:(id)arg20 expireState:(long long)arg21 balloonBundleID:(id)arg22 payloadData:(id)arg23 expressiveSendStyleID:(id)arg24 timeExpressiveSendPlayed:(id)arg25 errorType:(unsigned)arg26 associatedMessageGUID:(id)arg27 associatedMessageType:(long long)arg28 associatedMessageRange:(NSRange)arg29 bizIntent:(id)arg30 locale:(id)arg31 messageSummaryInfo:(id)arg32 threadIdentifier:(id)arg33 ;
-(void)setAssociatedMessageGUID:(NSString *)arg1 ;
-(void)setAssociatedMessageType:(long long)arg1 ;
-(void)setAssociatedMessageRange:(NSRange)arg1 ;
-(id)initWithSender:(id)arg1 time:(id)arg2 body:(id)arg3 attributes:(id)arg4 fileTransferGUIDs:(id)arg5 flags:(unsigned long long)arg6 error:(id)arg7 guid:(id)arg8 associatedMessageGUID:(id)arg9 associatedMessageType:(long long)arg10 associatedMessageRange:(NSRange)arg11 messageSummaryInfo:(id)arg12 threadIdentifier:(id)arg13 ;
-(id)initWithMessageItem:(id)arg1 ;
-(char)isAssociatedMessageItem;
-(char)isMessageAcknowledgment;
-(char)isBreadcrumb;
-(char)isMessageEdit;
-(char)isSticker;
@end

