/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:16 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/InAppMessagesCore.framework/Versions/A/InAppMessagesCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/IAMEventProtocol.h>

@class NSDictionary, NSString;

@interface IAMFigaroEvent : NSObject <IAMEventProtocol> {

	long long _type;
	NSDictionary* _payload;

}

@property (assign,nonatomic) long long type;                        //@synthesize type=_type - In the implementation block
@property (nonatomic,copy) NSDictionary * payload;                  //@synthesize payload=_payload - In the implementation block
@property (nonatomic,copy,readonly) NSString * name; 
@property (nonatomic,copy,readonly) id value; 
@property (nonatomic,copy,readonly) NSString * source; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSString *)name;
-(void)setType:(long long)arg1 ;
-(long long)type;
-(void)setPayload:(NSDictionary *)arg1 ;
-(NSDictionary *)payload;
-(char)matchesWithKey:(id)arg1 ;
-(id)serializeFigaroEventProperties:(id)arg1 withPrefix:(id)arg2 ;
-(id)decomposeKey:(id)arg1 ;
-(id)initWithFigaroEventProperties:(id)arg1 ;
@end

