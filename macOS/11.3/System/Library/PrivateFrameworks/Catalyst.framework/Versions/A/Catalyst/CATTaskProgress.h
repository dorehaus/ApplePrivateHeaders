/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:53 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/Catalyst.framework/Versions/A/Catalyst
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Catalyst/Catalyst-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSMutableCopying.h>

@class NSUUID, NSError, NSDictionary, NSString;

@interface CATTaskProgress : NSObject <NSSecureCoding, NSCopying, NSMutableCopying> {

	char _isCancelable;
	char _isCanceled;
	NSUUID* _UUID;
	unsigned long long _phase;
	id _resultObject;
	NSError* _error;
	NSDictionary* _userInfo;
	long long _completedUnitCount;
	long long _totalUnitCount;
	NSString* _requestClassName;

}

@property (nonatomic,copy) NSUUID * UUID;                               //@synthesize UUID=_UUID - In the implementation block
@property (assign,nonatomic) unsigned long long phase;                  //@synthesize phase=_phase - In the implementation block
@property (nonatomic,retain) id resultObject;                           //@synthesize resultObject=_resultObject - In the implementation block
@property (nonatomic,retain) NSError * error;                           //@synthesize error=_error - In the implementation block
@property (nonatomic,retain) NSDictionary * userInfo;                   //@synthesize userInfo=_userInfo - In the implementation block
@property (assign,nonatomic) char isCancelable;                         //@synthesize isCancelable=_isCancelable - In the implementation block
@property (assign,nonatomic) char isCanceled;                           //@synthesize isCanceled=_isCanceled - In the implementation block
@property (assign,nonatomic) long long completedUnitCount;              //@synthesize completedUnitCount=_completedUnitCount - In the implementation block
@property (assign,nonatomic) long long totalUnitCount;                  //@synthesize totalUnitCount=_totalUnitCount - In the implementation block
@property (nonatomic,copy) NSString * requestClassName;                 //@synthesize requestClassName=_requestClassName - In the implementation block
@property (nonatomic,readonly) unsigned long long state; 
+(char)supportsSecureCoding;
+(void)assertResultObject:(id)arg1 isValidForRequestClassName:(id)arg2 ;
+(Class)classForResultObjectWithRequestClassName:(id)arg1 ;
+(id)progressForOperation:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(id)debugDescription;
-(id)init;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(NSDictionary *)userInfo;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(unsigned long long)state;
-(NSError *)error;
-(void)setError:(NSError *)arg1 ;
-(NSUUID *)UUID;
-(void)setUserInfo:(NSDictionary *)arg1 ;
-(void)setTotalUnitCount:(long long)arg1 ;
-(void)setCompletedUnitCount:(long long)arg1 ;
-(long long)totalUnitCount;
-(long long)completedUnitCount;
-(unsigned long long)phase;
-(id)initWithOperation:(id)arg1 ;
-(void)setPhase:(unsigned long long)arg1 ;
-(void)setProgress:(id)arg1 ;
-(void)setUUID:(NSUUID *)arg1 ;
-(void)setIsCanceled:(char)arg1 ;
-(char)isCanceled;
-(id)resultObject;
-(void)setResultObject:(id)arg1 ;
-(char)isCancelable;
-(id)initWithOperationUUID:(id)arg1 ;
-(NSString *)requestClassName;
-(id)progressStateDescription;
-(void)setIsCancelable:(char)arg1 ;
-(void)setRequestClassName:(NSString *)arg1 ;
@end

