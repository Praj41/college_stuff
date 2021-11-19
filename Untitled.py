#!/usr/bin/env python
# coding: utf-8

# In[1]:


import numpy as np
import pandas as pd
import matplotlib.pyplot as plt
import seaborn as sns


# 

# In[2]:


dataset = pd.read_csv("WorldCupMatches_new.csv")


# In[4]:


dataset.head(50)


# In[5]:


dataset.head()


# In[7]:


dataset.shape


# In[16]:


dataset1 = pd.read_csv("WorldCupMatches_new.csv", index_col=0)
dataset1.head(50)


# In[22]:


dataset1.at[1930, "Home Team Name"]


# In[23]:


dataset.columns


# In[24]:


dataset1.at[2014, "Stadium"]


# In[31]:


dataset.info()


# In[30]:


dataset.describe()


# In[29]:


dataset.dtypes


# In[33]:


dataset.memory_usage()


# In[34]:


dataset1.memory_usage()


# In[35]:


dataset1.columns


# In[36]:


dataset2 = dataset
dataset2.set_index("Datetime")


# In[ ]:


dataset2.at()

