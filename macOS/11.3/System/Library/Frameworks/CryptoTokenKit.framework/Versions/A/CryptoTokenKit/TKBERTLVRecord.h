/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:20 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/CryptoTokenKit.framework/Versions/A/CryptoTokenKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CryptoTokenKit/TKTLVRecord.h>

@interface TKBERTLVRecord : TKTLVRecord
+(id)parseFromDataSource:(id)arg1 ;
+(unsigned long long)encodeNumber:(unsigned long long)arg1 into:(char*)arg2 ;
+(id)dataForTag:(unsigned long long)arg1 ;
+(id)zuluDateFormatter;
-(id)initWithPropertyList:(id)arg1 ;
-(id)propertyList;
-(id)initWithTag:(unsigned long long)arg1 value:(id)arg2 ;
-(id)initWithTag:(unsigned long long)arg1 records:(id)arg2 ;
@end
