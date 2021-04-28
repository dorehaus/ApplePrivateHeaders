/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:32 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/Notes.framework/Versions/A/Notes
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Notes/ICNFIMAPSingleClientOperation.h>

@protocol ICNFIMAPAccount;
@class NSString, NSArray;

@interface ICNFIMAPClientNamespaceOperation : ICNFIMAPSingleClientOperation {

	id<ICNFIMAPAccount> _account;
	NSString* _separatorChar;
	NSArray* _privateNamespaces;
	NSArray* _publicNamespaces;
	NSArray* _sharedNamespaces;

}

@property (nonatomic,retain) id<ICNFIMAPAccount> account;              //@synthesize account=_account - In the implementation block
@property (nonatomic,copy) NSString * separatorChar;                   //@synthesize separatorChar=_separatorChar - In the implementation block
@property (nonatomic,copy) NSArray * privateNamespaces;                //@synthesize privateNamespaces=_privateNamespaces - In the implementation block
@property (nonatomic,copy) NSArray * publicNamespaces;                 //@synthesize publicNamespaces=_publicNamespaces - In the implementation block
@property (nonatomic,copy) NSArray * sharedNamespaces;                 //@synthesize sharedNamespaces=_sharedNamespaces - In the implementation block
-(id)init;
-(id<ICNFIMAPAccount>)account;
-(void)setAccount:(id<ICNFIMAPAccount>)arg1 ;
-(id)activityString;
-(NSString *)separatorChar;
-(id)initWithAccount:(id)arg1 separatorChar:(id)arg2 ;
-(NSArray *)privateNamespaces;
-(NSArray *)publicNamespaces;
-(NSArray *)sharedNamespaces;
-(void)setSeparatorChar:(NSString *)arg1 ;
-(id)commandTypeString;
-(char)executeOnConnection:(id)arg1 ;
-(long long)minRequiredConnectionState;
-(long long)maxAllowedConnectionState;
-(char)shouldSendAgainOnError;
-(void)setPrivateNamespaces:(NSArray *)arg1 ;
-(void)setPublicNamespaces:(NSArray *)arg1 ;
-(void)setSharedNamespaces:(NSArray *)arg1 ;
@end

