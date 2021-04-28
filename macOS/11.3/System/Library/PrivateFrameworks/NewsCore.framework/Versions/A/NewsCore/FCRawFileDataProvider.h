/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:38 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/Versions/A/NewsCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/FCAssetDataProvider.h>

@class NSString, FCInterestToken, NSData;

@interface FCRawFileDataProvider : NSObject <FCAssetDataProvider> {

	char _isRawFileConsumable;
	NSString* _filePath;
	FCInterestToken* _holdToken;

}

@property (nonatomic,readonly) FCInterestToken * holdToken;              //@synthesize holdToken=_holdToken - In the implementation block
@property (nonatomic,readonly) NSData * data; 
@property (nonatomic,readonly) NSString * filePath;                      //@synthesize filePath=_filePath - In the implementation block
@property (nonatomic,readonly) char isRawFileConsumable;                 //@synthesize isRawFileConsumable=_isRawFileConsumable - In the implementation block
-(id)init;
-(NSData *)data;
-(NSString *)filePath;
-(id)initWithFilePath:(id)arg1 ;
-(char)isRawFileConsumable;
-(FCInterestToken *)holdToken;
-(id)initWithFilePath:(id)arg1 holdToken:(id)arg2 ;
@end

