/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:13 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/Versions/A/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/GEOSearchResultSection.h>
@class NSString, GEOStyleAttributes;


@protocol GEOSearchResultSection
@property (assign,nonatomic) long long cellType; 
@property (nonatomic,copy) NSString * headerDisplayName; 
@property (nonatomic,copy) NSString * subHeaderDisplayName; 
@property (nonatomic,readonly) GEOStyleAttributes * styleAttributes; 
@required
-(GEOStyleAttributes *)styleAttributes;
-(long long)cellType;
-(void)setCellType:(long long)arg1;
-(NSString *)headerDisplayName;
-(void)setHeaderDisplayName:(id)arg1;
-(NSString *)subHeaderDisplayName;
-(void)setSubHeaderDisplayName:(id)arg1;

@end


@class NSString, GEOStyleAttributes;

@interface GEOSearchResultSection : NSObject <GEOSearchResultSection> {

	long long _cellType;
	NSString* _headerDisplayName;
	NSString* _subHeaderDisplayName;
	GEOStyleAttributes* _styleAttributes;

}

@property (assign,nonatomic) long long cellType;                                  //@synthesize cellType=_cellType - In the implementation block
@property (nonatomic,copy) NSString * headerDisplayName;                          //@synthesize headerDisplayName=_headerDisplayName - In the implementation block
@property (nonatomic,copy) NSString * subHeaderDisplayName;                       //@synthesize subHeaderDisplayName=_subHeaderDisplayName - In the implementation block
@property (nonatomic,readonly) GEOStyleAttributes * styleAttributes;              //@synthesize styleAttributes=_styleAttributes - In the implementation block
-(id)init;
-(GEOStyleAttributes *)styleAttributes;
-(id)initWithSearchResultSection:(id)arg1 ;
-(long long)cellType;
-(void)setCellType:(long long)arg1 ;
-(NSString *)headerDisplayName;
-(void)setHeaderDisplayName:(NSString *)arg1 ;
-(NSString *)subHeaderDisplayName;
-(void)setSubHeaderDisplayName:(NSString *)arg1 ;
@end

