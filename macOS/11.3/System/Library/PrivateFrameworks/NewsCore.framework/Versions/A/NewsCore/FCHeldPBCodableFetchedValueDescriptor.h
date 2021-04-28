/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:38 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/Versions/A/NewsCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NewsCore/NewsCore-Structs.h>
#import <NewsCore/FCFetchedValueDescriptor.h>

@protocol FCContentContext;
@class FCFetchedValueManager;

@interface FCHeldPBCodableFetchedValueDescriptor : FCFetchedValueDescriptor {

	Class _codableClass;
	id<FCContentContext> _contentContext;
	FCFetchedValueManager* _resourceConfigurationManager;

}

@property (nonatomic,readonly) Class codableClass;                                                //@synthesize codableClass=_codableClass - In the implementation block
@property (nonatomic,readonly) id<FCContentContext> contentContext;                               //@synthesize contentContext=_contentContext - In the implementation block
@property (nonatomic,readonly) FCFetchedValueManager * resourceConfigurationManager;              //@synthesize resourceConfigurationManager=_resourceConfigurationManager - In the implementation block
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)init;
-(id<FCContentContext>)contentContext;
-(void)fetchValueWithCachePolicy:(unsigned long long)arg1 qualityOfService:(long long)arg2 completion:(/*^block*/id)arg3 ;
-(char)isValue:(id)arg1 equalToValue:(id)arg2 ;
-(id)inputManagers;
-(id)fastCachedValue;
-(FCFetchedValueManager *)resourceConfigurationManager;
-(void)_processFetchOperationResult:(id)arg1 withBlock:(/*^block*/id)arg2 ;
-(Class)codableClass;
-(id)initWithCodableClass:(Class)arg1 contentContext:(id)arg2 resourceConfigurationManager:(id)arg3 ;
@end

