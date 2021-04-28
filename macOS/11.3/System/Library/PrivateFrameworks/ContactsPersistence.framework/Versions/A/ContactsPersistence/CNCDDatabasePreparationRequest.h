/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:18 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/ContactsPersistence.framework/Versions/A/ContactsPersistence
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ContactsPersistence/ContactsPersistence-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@protocol CNCDIOSLegacyIdentifierRegistration;
@class NSURL;

@interface CNCDDatabasePreparationRequest : NSObject <NSCopying, NSSecureCoding> {

	BOOL _readOnly;
	NSURL* _url;
	id<CNCDIOSLegacyIdentifierRegistration> _registrar;

}

@property (nonatomic,copy,readonly) NSURL * url;                                     //@synthesize url=_url - In the implementation block
@property (nonatomic,readonly) BOOL readOnly;                                        //@synthesize readOnly=_readOnly - In the implementation block
@property (readonly) id<CNCDIOSLegacyIdentifierRegistration> registrar;              //@synthesize registrar=_registrar - In the implementation block
+(char)supportsSecureCoding;
-(id)copyWithZone:(NSZone*)arg1 ;
-(char)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSURL *)url;
-(id<CNCDIOSLegacyIdentifierRegistration>)registrar;
-(BOOL)readOnly;
-(id)initWithURL:(id)arg1 readOnly:(BOOL)arg2 ;
-(id)initWithURL:(id)arg1 readOnly:(BOOL)arg2 registrar:(id)arg3 ;
-(id)preparationRequestUsingRegistrar:(id)arg1 ;
@end

