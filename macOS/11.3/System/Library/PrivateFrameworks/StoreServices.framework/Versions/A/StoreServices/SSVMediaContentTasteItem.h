/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:53 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/StoreServices.framework/Versions/A/StoreServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <StoreServices/StoreServices-Structs.h>
#import <libobjc.A.dylib/SSXPCCoding.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSMutableCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString;

@interface SSVMediaContentTasteItem : NSObject <SSXPCCoding, NSCopying, NSMutableCopying, NSSecureCoding> {

	unsigned long long _contentType;
	NSString* _playlistGlobalID;
	long long _storeAdamID;
	unsigned long long _tasteType;

}

@property (nonatomic,readonly) unsigned long long contentType;                //@synthesize contentType=_contentType - In the implementation block
@property (nonatomic,copy,readonly) NSString * playlistGlobalID;              //@synthesize playlistGlobalID=_playlistGlobalID - In the implementation block
@property (nonatomic,readonly) long long storeAdamID;                         //@synthesize storeAdamID=_storeAdamID - In the implementation block
@property (nonatomic,readonly) unsigned long long tasteType;                  //@synthesize tasteType=_tasteType - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(char)supportsSecureCoding;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)description;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(unsigned long long)contentType;
-(id)initWithXPCEncoding:(id)arg1 ;
-(id)copyXPCEncoding;
-(long long)storeAdamID;
-(NSString *)playlistGlobalID;
-(unsigned long long)tasteType;
-(id)_copyWithMediaContentTasteItemClass:(Class)arg1 ;
@end

