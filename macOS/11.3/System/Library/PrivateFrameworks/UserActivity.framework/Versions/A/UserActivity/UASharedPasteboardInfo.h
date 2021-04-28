/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:08 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/UserActivity.framework/Versions/A/UserActivity
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UserActivity/UserActivity-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSFileHandle, NSArray, NSString, NSDictionary;

@interface UASharedPasteboardInfo : NSObject <NSSecureCoding, NSCopying> {

	NSFileHandle* _dataFile;
	long long _dataSize;
	NSArray* _items;
	NSString* _sharedDataPath;
	NSDictionary* _sandboxExtensions;

}

@property (retain) NSFileHandle * dataFile;                     //@synthesize dataFile=_dataFile - In the implementation block
@property (assign) long long dataSize;                          //@synthesize dataSize=_dataSize - In the implementation block
@property (copy) NSArray * items;                               //@synthesize items=_items - In the implementation block
@property (copy) NSString * sharedDataPath;                     //@synthesize sharedDataPath=_sharedDataPath - In the implementation block
@property (copy) NSDictionary * sandboxExtensions;              //@synthesize sandboxExtensions=_sandboxExtensions - In the implementation block
+(char)supportsSecureCoding;
-(id)copyWithZone:(NSZone*)arg1 ;
-(char)isEqual:(id)arg1 ;
-(id)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSArray *)items;
-(void)setItems:(NSArray *)arg1 ;
-(long long)dataSize;
-(void)setDataSize:(long long)arg1 ;
-(void)setDataFile:(NSFileHandle *)arg1 ;
-(NSFileHandle *)dataFile;
-(void)setSharedDataPath:(NSString *)arg1 ;
-(void)setSandboxExtensions:(NSDictionary *)arg1 ;
-(NSString *)sharedDataPath;
-(NSDictionary *)sandboxExtensions;
@end

