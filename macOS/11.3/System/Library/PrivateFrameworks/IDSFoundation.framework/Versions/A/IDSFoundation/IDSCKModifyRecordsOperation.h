/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:10 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/IDSFoundation.framework/Versions/A/IDSFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <IDSFoundation/IDSCKDatabaseOperation.h>

@interface IDSCKModifyRecordsOperation : IDSCKDatabaseOperation {

	/*^block*/id _modifyRecordsCompletionBlock;
	long long _savePolicy;

}

@property (nonatomic,copy) id modifyRecordsCompletionBlock;              //@synthesize modifyRecordsCompletionBlock=_modifyRecordsCompletionBlock - In the implementation block
@property (assign,nonatomic) long long savePolicy;                       //@synthesize savePolicy=_savePolicy - In the implementation block
+(id)alloc;
+(Class)__class;
-(void)setSavePolicy:(long long)arg1 ;
-(void)setModifyRecordsCompletionBlock:(id)arg1 ;
-(long long)savePolicy;
-(id)modifyRecordsCompletionBlock;
@end

