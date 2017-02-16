//
//  Application+CoreDataProperties.h
//  applicationApp
//
//  Created by SnehaPriya Ale on 2/12/17.
//  Copyright © 2017 snehapriyaale. All rights reserved.
//
//  Choose "Create NSManagedObject Subclass…" from the Core Data editor menu
//  to delete and recreate this implementation file for your updated model.
//

#import "Application.h"

NS_ASSUME_NONNULL_BEGIN

@interface Application (CoreDataProperties)

@property (nullable, nonatomic, retain) NSString *name;
@property (nullable, nonatomic, retain) NSString *email_address;
@property (nullable, nonatomic, retain) NSString *contact_number;

@end

NS_ASSUME_NONNULL_END
