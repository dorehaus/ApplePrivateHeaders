/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:16 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/SearchUI.framework/Versions/A/SearchUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface SearchUIStockDataSource : NSObject {

	long long _identifier;
	NSString* _name;
	NSString* _sourceDescription;

}

@property (assign,nonatomic) long long identifier;                                 //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,copy) NSString * name;                                        //@synthesize name=_name - In the implementation block
@property (nonatomic,copy) NSString * sourceDescription;                           //@synthesize sourceDescription=_sourceDescription - In the implementation block
@property (nonatomic,readonly) NSString * localizedSourceDescription; 
-(id)description;
-(NSString *)name;
-(id)initWithDictionary:(id)arg1 ;
-(void)setName:(NSString *)arg1 ;
-(long long)identifier;
-(void)setIdentifier:(long long)arg1 ;
-(id)archiveDictionary;
-(NSString *)sourceDescription;
-(void)setSourceDescription:(NSString *)arg1 ;
-(NSString *)localizedSourceDescription;
@end
