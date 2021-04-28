/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:52 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/StoreServices.framework/Versions/A/StoreServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, NSNumber, NSURL;

@interface SSVContentLink : NSObject {

	NSString* _categoryName;
	long long _contentKind;
	NSNumber* _itemIdentifier;
	NSString* _itemTitle;
	NSString* _providerName;
	NSString* _searchTerm;
	long long _targetApplication;

}

@property (nonatomic,copy) NSString * categoryName;                    //@synthesize categoryName=_categoryName - In the implementation block
@property (nonatomic,copy) NSNumber * itemIdentifier;                  //@synthesize itemIdentifier=_itemIdentifier - In the implementation block
@property (nonatomic,copy) NSString * itemTitle;                       //@synthesize itemTitle=_itemTitle - In the implementation block
@property (nonatomic,copy) NSString * providerName;                    //@synthesize providerName=_providerName - In the implementation block
@property (nonatomic,copy) NSString * searchTerm;                      //@synthesize searchTerm=_searchTerm - In the implementation block
@property (assign,nonatomic) long long contentKind;                    //@synthesize contentKind=_contentKind - In the implementation block
@property (assign,nonatomic) long long targetApplication;              //@synthesize targetApplication=_targetApplication - In the implementation block
@property (nonatomic,readonly) NSURL * URL; 
-(NSNumber *)itemIdentifier;
-(NSURL *)URL;
-(void)setItemIdentifier:(NSNumber *)arg1 ;
-(long long)contentKind;
-(NSString *)categoryName;
-(void)setCategoryName:(NSString *)arg1 ;
-(NSString *)providerName;
-(void)setProviderName:(NSString *)arg1 ;
-(NSString *)searchTerm;
-(void)setSearchTerm:(NSString *)arg1 ;
-(NSString *)itemTitle;
-(void)setItemTitle:(NSString *)arg1 ;
-(long long)targetApplication;
-(long long)_targetApplicationWithContentKind:(long long)arg1 ;
-(id)_URLSchemeWithApplication:(long long)arg1 ;
-(id)_stringForContentKind:(long long)arg1 ;
-(void)setContentKind:(long long)arg1 ;
-(void)setTargetApplication:(long long)arg1 ;
@end

