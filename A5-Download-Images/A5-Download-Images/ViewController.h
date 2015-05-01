//
//  ViewController.h
//  A5-Download-Images
//
//  Created by mobile06 on 4/30/15.
//  Copyright (c) 2015 Steven Brice. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface ViewController : UIViewController <UICollectionViewDataSource, UICollectionViewDelegateFlowLayout>

@property NSArray *imageArray;

@property(nonatomic, weak) IBOutlet UICollectionView *collectionView;

@end

