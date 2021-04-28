/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:47 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/MediaServices.framework/Versions/A/MediaServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Foundation/NSCoder.h>
#import <libobjc.A.dylib/MSVSegmentedSubEncoder.h>

@class NSData, NSMutableArray, NSMapTable, NSDictionary, NSString;

@interface MSVOPACKEncoder : NSCoder <MSVSegmentedSubEncoder> {

	char _hasFinished;
	NSData* _encodedData;
	NSMutableArray* _objects;
	NSMapTable* _objectLookupTable;
	NSMutableArray* _wrapperStack;
	NSDictionary* _userInfo;

}

@property (assign,nonatomic) char hasFinished;                              //@synthesize hasFinished=_hasFinished - In the implementation block
@property (nonatomic,readonly) NSMutableArray * objects;                    //@synthesize objects=_objects - In the implementation block
@property (nonatomic,readonly) NSMapTable * objectLookupTable;              //@synthesize objectLookupTable=_objectLookupTable - In the implementation block
@property (nonatomic,readonly) NSMutableArray * wrapperStack;               //@synthesize wrapperStack=_wrapperStack - In the implementation block
@property (nonatomic,readonly) NSDictionary * userInfo;                     //@synthesize userInfo=_userInfo - In the implementation block
@property (nonatomic,readonly) NSData * encodedData;                        //@synthesize encodedData=_encodedData - In the implementation block
@property (nonatomic,readonly) char hasTopLevelData; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)encodedDataWithRootObject:(id)arg1 error:(id*)arg2 ;
+(id)encodedDataWithRootObject:(id)arg1 userInfo:(id)arg2 error:(id*)arg3 ;
-(id)init;
-(NSDictionary *)userInfo;
-(char)allowsKeyedCoding;
-(void)encodeInt64:(long long)arg1 forKey:(id)arg2 ;
-(void)encodeObject:(id)arg1 forKey:(id)arg2 ;
-(void)encodeBool:(char)arg1 forKey:(id)arg2 ;
-(void)encodeBytes:(const char*)arg1 length:(unsigned long long)arg2 forKey:(id)arg3 ;
-(void)encodeInt32:(int)arg1 forKey:(id)arg2 ;
-(void)encodeDouble:(double)arg1 forKey:(id)arg2 ;
-(void)encodeInt:(int)arg1 forKey:(id)arg2 ;
-(void)encodeRootObject:(id)arg1 ;
-(char)requiresSecureCoding;
-(void)encodeFloat:(float)arg1 forKey:(id)arg2 ;
-(NSData *)encodedData;
-(void)finishEncoding;
-(NSMutableArray *)objects;
-(id)msv_userInfo;
-(void)msv_setUserInfo:(id)arg1 ;
-(char)hasFinished;
-(void)setHasFinished:(char)arg1 ;
-(void)beginEncodingPartialTopLevelObject:(id)arg1 ;
-(void)finishEncodingPartialTopLevelObject;
-(char)hasTopLevelData;
-(void)finishEncodingWithError:(id*)arg1 ;
-(id)encodedDataWithError:(id*)arg1 ;
-(void)_encodeNumber:(id)arg1 forKey:(id)arg2 ;
-(id)_convertNumber:(id)arg1 ;
-(id)_convertObject:(id)arg1 ;
-(NSMapTable *)objectLookupTable;
-(NSMutableArray *)wrapperStack;
@end
