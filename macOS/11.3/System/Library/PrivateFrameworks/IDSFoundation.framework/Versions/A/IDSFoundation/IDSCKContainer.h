/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:10 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/IDSFoundation.framework/Versions/A/IDSFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, IDSCKDatabase;

@interface IDSCKContainer : NSObject {

	NSString* _containerIdentifier;
	IDSCKDatabase* _privateCloudDatabase;
	IDSCKDatabase* _publicCloudDatabase;

}

@property (readonly) NSString * containerIdentifier;                              //@synthesize containerIdentifier=_containerIdentifier - In the implementation block
@property (nonatomic,readonly) IDSCKDatabase * privateCloudDatabase;              //@synthesize privateCloudDatabase=_privateCloudDatabase - In the implementation block
@property (nonatomic,readonly) IDSCKDatabase * publicCloudDatabase;               //@synthesize publicCloudDatabase=_publicCloudDatabase - In the implementation block
+(id)containerWithIdentifier:(id)arg1 ;
+(Class)__class;
-(NSString *)containerIdentifier;
-(IDSCKDatabase *)privateCloudDatabase;
-(IDSCKDatabase *)publicCloudDatabase;
@end

