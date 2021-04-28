/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:37 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/Versions/A/NewsCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NewsCore/NewsCore-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface FCContextConfiguration : NSObject <NSCopying> {

	char _isProductionContentEnvironment;
	char _isProductionPrivateDataEnvironment;
	long long _environment;
	NSString* _contentContainerIdentifier;
	NSString* _contentContainerCombinationIdentifier;
	NSString* _privateDataContainerIdentifier;
	NSString* _privateDataSecureContainerIdentifier;
	NSString* _privateDataContainerCombinationIdentifier;

}

@property (nonatomic,readonly) char isProductionContentEnvironment;                                    //@synthesize isProductionContentEnvironment=_isProductionContentEnvironment - In the implementation block
@property (nonatomic,readonly) char isProductionPrivateDataEnvironment;                                //@synthesize isProductionPrivateDataEnvironment=_isProductionPrivateDataEnvironment - In the implementation block
@property (nonatomic,copy,readonly) NSString * privateDataContainerIdentifier;                         //@synthesize privateDataContainerIdentifier=_privateDataContainerIdentifier - In the implementation block
@property (nonatomic,copy,readonly) NSString * privateDataSecureContainerIdentifier;                   //@synthesize privateDataSecureContainerIdentifier=_privateDataSecureContainerIdentifier - In the implementation block
@property (nonatomic,copy,readonly) NSString * privateDataContainerCombinationIdentifier;              //@synthesize privateDataContainerCombinationIdentifier=_privateDataContainerCombinationIdentifier - In the implementation block
@property (nonatomic,readonly) long long environment;                                                  //@synthesize environment=_environment - In the implementation block
@property (nonatomic,copy,readonly) NSString * contentContainerIdentifier;                             //@synthesize contentContainerIdentifier=_contentContainerIdentifier - In the implementation block
@property (nonatomic,copy,readonly) NSString * contentContainerCombinationIdentifier;                  //@synthesize contentContainerCombinationIdentifier=_contentContainerCombinationIdentifier - In the implementation block
+(id)defaultConfiguration;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)init;
-(long long)environment;
-(id)initWithEnvironment:(long long)arg1 ;
-(NSString *)contentContainerCombinationIdentifier;
-(NSString *)contentContainerIdentifier;
-(NSString *)privateDataContainerIdentifier;
-(NSString *)privateDataSecureContainerIdentifier;
-(char)isProductionPrivateDataEnvironment;
-(NSString *)privateDataContainerCombinationIdentifier;
-(char)isProductionContentEnvironment;
-(id)initWithProductionContentEnvironment:(char)arg1 productionPrivateDataEnvironment:(char)arg2 contentContainerIdentifier:(id)arg3 privateDataContainerIdentifier:(id)arg4 privateDataSecureContainerIdentifier:(id)arg5 storeFrontID:(id)arg6 environment:(long long)arg7 ;
@end

