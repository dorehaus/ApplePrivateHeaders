/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:02 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/Versions/A/PhotoLibraryServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PhotoLibraryServices/PhotoLibraryServices-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/PSISearchableTerm.h>

@class NSString;

@interface PSISynonym : NSObject <NSCopying, PSISearchableTerm> {

	NSString* _text;
	unsigned long long _category;
	unsigned long long _owningGroupId;
	NSString* _identifier;

}

@property (nonatomic,readonly) NSString * text;                               //@synthesize text=_text - In the implementation block
@property (nonatomic,readonly) unsigned long long category;                   //@synthesize category=_category - In the implementation block
@property (nonatomic,readonly) unsigned long long owningGroupId;              //@synthesize owningGroupId=_owningGroupId - In the implementation block
@property (nonatomic,readonly) NSString * identifier;                         //@synthesize identifier=_identifier - In the implementation block
-(id)copyWithZone:(NSZone*)arg1 ;
-(char)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(NSString *)identifier;
-(unsigned long long)category;
-(NSString *)text;
-(unsigned long long)owningGroupId;
-(id)initWithText:(id)arg1 category:(unsigned long long)arg2 owningGroupId:(unsigned long long)arg3 identifier:(id)arg4 ;
@end

