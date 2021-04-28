/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:23 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/CDDataAccessExpress.framework/Versions/A/CDDataAccessExpress
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CDDataAccessExpress/DASearchQuery.h>

@class NSString;

@interface DAContactsSearchQuery : DASearchQuery {

	char _includePhotos;
	char _calendarInitiated;
	NSString* _searchBase;
	NSString* _searchScope;

}

@property (nonatomic,copy) NSString * searchBase;                 //@synthesize searchBase=_searchBase - In the implementation block
@property (nonatomic,copy) NSString * searchScope;                //@synthesize searchScope=_searchScope - In the implementation block
@property (assign,nonatomic) char includePhotos;                  //@synthesize includePhotos=_includePhotos - In the implementation block
@property (assign,nonatomic) char calendarInitiated;              //@synthesize calendarInitiated=_calendarInitiated - In the implementation block
+(id)contactsSearchQueryWithSearchString:(id)arg1 searchBase:(id)arg2 searchScope:(id)arg3 consumer:(id)arg4 ;
-(id)dictionaryRepresentation;
-(void)setIncludePhotos:(char)arg1 ;
-(char)includePhotos;
-(void)setSearchScope:(NSString *)arg1 ;
-(NSString *)searchScope;
-(NSString *)searchBase;
-(void)setSearchBase:(NSString *)arg1 ;
-(id)initWithDictionaryRepresentation:(id)arg1 consumer:(id)arg2 ;
-(id)initWithSearchString:(id)arg1 searchBase:(id)arg2 searchScope:(id)arg3 consumer:(id)arg4 ;
-(char)calendarInitiated;
-(void)setCalendarInitiated:(char)arg1 ;
@end

