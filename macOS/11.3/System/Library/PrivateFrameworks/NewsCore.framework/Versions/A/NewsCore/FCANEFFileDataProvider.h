/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:38 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/Versions/A/NewsCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/FCAssetDataProvider.h>

@class NSData, NSString, FCInterestToken;

@interface FCANEFFileDataProvider : NSObject <FCAssetDataProvider> {

	NSString* _filePath;
	NSData* _wrappingKey;
	long long _options;
	FCInterestToken* _holdToken;

}

@property (nonatomic,copy,readonly) NSData * wrappingKey;                //@synthesize wrappingKey=_wrappingKey - In the implementation block
@property (nonatomic,readonly) long long options;                        //@synthesize options=_options - In the implementation block
@property (nonatomic,readonly) FCInterestToken * holdToken;              //@synthesize holdToken=_holdToken - In the implementation block
@property (nonatomic,readonly) NSData * data; 
@property (nonatomic,readonly) NSString * filePath;                      //@synthesize filePath=_filePath - In the implementation block
@property (nonatomic,readonly) char isRawFileConsumable; 
-(NSData *)data;
-(long long)options;
-(NSString *)filePath;
-(char)isRawFileConsumable;
-(NSData *)wrappingKey;
-(id)initWithFilePath:(id)arg1 wrappingKey:(id)arg2 options:(long long)arg3 holdToken:(id)arg4 ;
-(FCInterestToken *)holdToken;
@end
