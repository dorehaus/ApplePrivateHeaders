/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:37 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/AskPermission.framework/Versions/A/AskPermission
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface APResult : NSObject {

	NSString* _bundleIdentifier;
	NSString* _buyParams;
	NSString* _itemIdentifier;
	NSString* _productType;

}

@property (readonly) NSString * bundleIdentifier;              //@synthesize bundleIdentifier=_bundleIdentifier - In the implementation block
@property (readonly) NSString * buyParams;                     //@synthesize buyParams=_buyParams - In the implementation block
@property (readonly) NSString * itemIdentifier;                //@synthesize itemIdentifier=_itemIdentifier - In the implementation block
@property (readonly) NSString * productType;                   //@synthesize productType=_productType - In the implementation block
-(id)description;
-(NSString *)itemIdentifier;
-(id)initWithDictionary:(id)arg1 ;
-(NSString *)bundleIdentifier;
-(NSString *)productType;
-(id)initWithBundleIdentifier:(id)arg1 buyParams:(id)arg2 itemIdentifier:(id)arg3 productType:(id)arg4 ;
-(NSString *)buyParams;
-(id)compile;
@end

