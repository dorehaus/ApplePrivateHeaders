/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:44 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/Versions/A/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface TCImportFontCacheKey : NSObject {

	int _size;
	NSString* _name;

}

@property (nonatomic,copy) NSString * name;              //@synthesize name=_name - In the implementation block
@property (assign,nonatomic) int size;                   //@synthesize size=_size - In the implementation block
+(id)createFontCacheKeyForName:(id)arg1 size:(int)arg2 ;
-(int)size;
-(char)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSString *)name;
-(void)setName:(NSString *)arg1 ;
-(void)setSize:(int)arg1 ;
@end

