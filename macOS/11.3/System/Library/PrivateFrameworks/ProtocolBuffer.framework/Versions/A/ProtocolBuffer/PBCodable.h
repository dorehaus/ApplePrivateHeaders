/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:03 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/ProtocolBuffer.framework/Versions/A/ProtocolBuffer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSData;

@interface PBCodable : NSObject <NSSecureCoding>

@property (nonatomic,readonly) NSData * data; 
+(char)supportsSecureCoding;
+(id)options;
-(void)setClientMetricsIfSupported:(id)arg1 ;
-(id)init;
-(NSData *)data;
-(id)initWithData:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)dictionaryRepresentation;
-(char)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)formattedText;
@end
