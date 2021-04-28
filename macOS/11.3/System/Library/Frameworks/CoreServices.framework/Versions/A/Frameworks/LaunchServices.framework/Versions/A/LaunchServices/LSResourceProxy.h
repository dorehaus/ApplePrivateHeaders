/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:50:54 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/CoreServices.framework/Versions/A/Frameworks/LaunchServices.framework/Versions/A/LaunchServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <LaunchServices/LaunchServices-Structs.h>
#import <LaunchServices/_LSQueryResult.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, _LSLazyPropertyList, NSDictionary;

@interface LSResourceProxy : _LSQueryResult <NSCopying, NSSecureCoding> {

	NSString* _localizedName;
	_LSLazyPropertyList* __iconsDictionary;

}

@property (setter=_setLocalizedName:,nonatomic,copy) NSString * localizedName;                              //@synthesize localizedName=_localizedName - In the implementation block
@property (setter=_setIconsDictionary:,nonatomic,copy) _LSLazyPropertyList * _iconsDictionary;              //@synthesize _iconsDictionary=__iconsDictionary - In the implementation block
@property (nonatomic,readonly) id<LSIconResourceLocator> iconResourceLocator; 
@property (nonatomic,readonly) char boundIconIsBadge; 
@property (nonatomic,readonly) NSDictionary * iconsDictionary; 
@property (nonatomic,readonly) NSString * primaryIconName; 
@property (assign,nonatomic) unsigned long long propertyListCachingStrategy; 
+(char)supportsSecureCoding;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)uniqueIdentifier;
-(NSString *)primaryIconName;
-(NSString *)localizedName;
-(id)iconDataForVariant:(int)arg1 withOptions:(int)arg2 ;
-(id)iconDataForVariant:(int)arg1 ;
-(_LSLazyPropertyList *)_iconsDictionary;
-(id)_initWithLocalizedName:(id)arg1 ;
-(char)boundIconIsBadge;
-(id<LSIconResourceLocator>)iconResourceLocator;
-(NSDictionary *)iconsDictionary;
-(id)iconDataForStyle:(id)arg1 width:(long long)arg2 height:(long long)arg3 options:(unsigned long long)arg4 ;
-(unsigned long long)propertyListCachingStrategy;
-(void)setPropertyListCachingStrategy:(unsigned long long)arg1 ;
-(void)_setLocalizedName:(id)arg1 ;
-(void)_setIconsDictionary:(id)arg1 ;
@end

