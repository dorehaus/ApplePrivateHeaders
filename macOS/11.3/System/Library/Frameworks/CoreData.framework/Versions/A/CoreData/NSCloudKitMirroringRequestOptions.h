/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:02 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/CoreData.framework/Versions/A/CoreData
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class CKOperationConfiguration;

@interface NSCloudKitMirroringRequestOptions : NSObject {

	CKOperationConfiguration* _operationConfiguration;

}

@property (nonatomic,retain) CKOperationConfiguration * operationConfiguration;              //@synthesize operationConfiguration=_operationConfiguration - In the implementation block
@property (assign,nonatomic) long long qualityOfService; 
@property (assign,nonatomic) char allowsCellularAccess; 
-(id)copy;
-(void)dealloc;
-(id)init;
-(void)setQualityOfService:(long long)arg1 ;
-(long long)qualityOfService;
-(void)setAllowsCellularAccess:(char)arg1 ;
-(char)allowsCellularAccess;
-(CKOperationConfiguration *)operationConfiguration;
-(void)setOperationConfiguration:(CKOperationConfiguration *)arg1 ;
@end
