/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:29 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/MailSupport.framework/Versions/A/MailSupport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MailSupport/MailSupport-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class AWDMailMessage;

@interface AWDMailMessageLoadingReport : PBCodable <NSCopying> {

	long long _timeLoadingSpinnerIsVisibleInSeconds;
	unsigned long long _timestamp;
	AWDMailMessage* _message;
	SCD_Struct_AW4 _has;

}

@property (assign,nonatomic) char hasTimestamp; 
@property (assign,nonatomic) unsigned long long timestamp;                                //@synthesize timestamp=_timestamp - In the implementation block
@property (assign,nonatomic) char hasTimeLoadingSpinnerIsVisibleInSeconds; 
@property (assign,nonatomic) long long timeLoadingSpinnerIsVisibleInSeconds;              //@synthesize timeLoadingSpinnerIsVisibleInSeconds=_timeLoadingSpinnerIsVisibleInSeconds - In the implementation block
@property (nonatomic,readonly) char hasMessage; 
@property (nonatomic,retain) AWDMailMessage * message;                                    //@synthesize message=_message - In the implementation block
-(id)copyWithZone:(NSZone*)arg1 ;
-(char)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(AWDMailMessage *)message;
-(void)setMessage:(AWDMailMessage *)arg1 ;
-(id)dictionaryRepresentation;
-(unsigned long long)timestamp;
-(void)mergeFrom:(id)arg1 ;
-(char)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)setTimestamp:(unsigned long long)arg1 ;
-(char)hasTimestamp;
-(void)setHasTimestamp:(char)arg1 ;
-(char)hasMessage;
-(void)setTimeLoadingSpinnerIsVisibleInSeconds:(long long)arg1 ;
-(id)initWithMailMessage:(id)arg1 loadingSpinnerIsVisibleTimeInSeconds:(long long)arg2 ;
-(void)setHasTimeLoadingSpinnerIsVisibleInSeconds:(char)arg1 ;
-(char)hasTimeLoadingSpinnerIsVisibleInSeconds;
-(long long)timeLoadingSpinnerIsVisibleInSeconds;
@end

