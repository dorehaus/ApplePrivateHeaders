/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:39 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/IMSharedUtilities.framework/Versions/A/IMSharedUtilities
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, NSData;

@interface IMNicknameEncryptionPlainRecordField : NSObject {

	NSString* _fieldName;
	NSData* _plainData;

}

@property (nonatomic,readonly) NSString * fieldName;              //@synthesize fieldName=_fieldName - In the implementation block
@property (nonatomic,readonly) NSData * plainData;                //@synthesize plainData=_plainData - In the implementation block
-(void)dealloc;
-(id)description;
-(NSString *)fieldName;
-(id)initWithFieldName:(id)arg1 plainData:(id)arg2 ;
-(NSData *)plainData;
@end

