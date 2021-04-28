/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:46 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/AppleServiceToolkit.framework/Versions/A/AppleServiceToolkit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSNumber, NSString, NSMutableDictionary;

@interface ASTErrorStatus : NSObject {

	NSNumber* _code;
	NSString* _reason;
	NSMutableDictionary* _data;

}

@property (nonatomic,retain) NSNumber * code;                         //@synthesize code=_code - In the implementation block
@property (nonatomic,retain) NSString * reason;                       //@synthesize reason=_reason - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * data;              //@synthesize data=_data - In the implementation block
+(id)errorStatusWithCode:(long long)arg1 ;
-(id)init;
-(NSNumber *)code;
-(NSMutableDictionary *)data;
-(void)setData:(NSMutableDictionary *)arg1 ;
-(NSString *)reason;
-(id)dictionary;
-(void)setCode:(NSNumber *)arg1 ;
-(void)setReason:(NSString *)arg1 ;
-(id)reasonForCode:(id)arg1 ;
@end

