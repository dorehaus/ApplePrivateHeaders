/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:14 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/CloudPhotoLibrary.framework/Versions/A/CloudPhotoLibrary
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface CPLTransaction : NSObject {

	char _dirty;
	NSString* _identifier;

}

@property (nonatomic,copy,readonly) NSString * identifier;              //@synthesize identifier=_identifier - In the implementation block
+(id)transactions;
+(unsigned long long)transactionCount;
+(void)endTransactionWithIdentifier:(id)arg1 ;
+(void)beginTransactionWithIdentifier:(id)arg1 description:(id)arg2 keepPower:(char)arg3 ;
+(id)newTransactionWithIdentifier:(id)arg1 description:(id)arg2 keepPower:(char)arg3 ;
-(void)dealloc;
-(NSString *)identifier;
-(void)endTransaction;
-(id)initWithIdentifier:(id)arg1 description:(id)arg2 keepPower:(char)arg3 ;
@end

