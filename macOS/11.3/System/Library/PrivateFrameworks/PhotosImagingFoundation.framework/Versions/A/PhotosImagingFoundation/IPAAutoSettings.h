/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:28 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/PhotosImagingFoundation.framework/Versions/A/PhotosImagingFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/IPAAutoSettings.h>
@class NSString;


@protocol IPAAutoSettings <NSObject>
@property (nonatomic,readonly) NSString * identifier; 
@property (nonatomic,readonly) char pending; 
@required
-(NSString *)identifier;
-(char)pending;
-(id)archiveDictionary;
-(char)applyArchiveDictionary:(id)arg1;

@end


@class NSString;

@interface IPAAutoSettings : NSObject <IPAAutoSettings> {

	NSString* _identifier;

}

@property (nonatomic,readonly) NSString * identifier;               //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,readonly) char pending; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)pendingWithIdentifier:(id)arg1 ;
-(char)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSString *)description;
-(NSString *)debugDescription;
-(id)init;
-(NSString *)identifier;
-(id)initWithIdentifier:(id)arg1 ;
-(char)pending;
-(char)_applyArchiveDictionary:(id)arg1 ;
-(id)archiveDictionary;
-(char)applyArchiveDictionary:(id)arg1 ;
-(void)_archiveIntoDictionary:(id)arg1 ;
-(char)isEqualToAutoSettings:(id)arg1 ;
@end

