/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:02 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/CFNetwork.framework/Versions/A/CFNetwork
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CFNetwork/CFNetwork-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSMutableCopying.h>

@class NSString, NSDate;

@interface NSHTTPCookie2 : NSObject <NSCopying, NSMutableCopying> {

	NSString* _name;
	NSString* _value;
	NSString* _domain;
	NSString* _path;
	NSString* _partition;
	NSString* _etldPlusOne;
	unsigned long long _sCreationDate;
	unsigned long long _sExpirationDate;
	unsigned long long _sLastAccessTime;
	char _secure;
	char _httpOnly;
	char _hostOnly;
	char _session;
	long long _sameSite;
	long long _source;
	char _sesion;
	NSDate* creationDate;

}

@property (readonly) NSString * name;                      //@synthesize name=_name - In the implementation block
@property (readonly) NSString * value;                     //@synthesize value=_value - In the implementation block
@property (readonly) NSString * domain;                    //@synthesize domain=_domain - In the implementation block
@property (readonly) NSString * path;                      //@synthesize path=_path - In the implementation block
@property (readonly) NSDate * creationDate; 
@property (readonly) NSDate * expirationDate; 
@property (readonly) char sesion;                          //@synthesize sesion=_sesion - In the implementation block
@property (readonly) char secure;                          //@synthesize secure=_secure - In the implementation block
@property (readonly) char httpOnly;                        //@synthesize httpOnly=_httpOnly - In the implementation block
@property (readonly) char hostOnly;                        //@synthesize hostOnly=_hostOnly - In the implementation block
@property (readonly) NSString * partition;                 //@synthesize partition=_partition - In the implementation block
@property (readonly) long long source;                     //@synthesize source=_source - In the implementation block
@property (readonly) long long sameSite;                   //@synthesize sameSite=_sameSite - In the implementation block
-(id)initWithName:(id)arg1 value:(id)arg2 domain:(id)arg3 ;
-(char)hostOnly;
-(char)sesion;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(NSString *)name;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(NSString *)domain;
-(NSString *)path;
-(long long)source;
-(NSString *)value;
-(NSDate *)expirationDate;
-(NSDate *)creationDate;
-(char)secure;
-(NSString *)partition;
-(char)httpOnly;
-(long long)sameSite;
@end
